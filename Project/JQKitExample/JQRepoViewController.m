//
//  JQRepoViewController.m
//  JQKit
//
//  Created by Fred Leitz on 11/4/2013.
//  Copyright (c) 2013 Fred Leitz. All rights reserved.
//

#import "JQRepoViewController.h"
#import <JQKit/JQKit.h>
#import "JQCollectionViewCell.h"
@interface JQRepoViewController ()

@end

@implementation JQRepoViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:@"JQRepoViewController"  bundle:[NSBundle mainBundle]];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self.collectionView registerNib:[UINib nibWithNibName:@"JQCollectionViewCell" bundle:nil] forCellWithReuseIdentifier:@"JQCollectionViewCell"];
    [[AFHTTPRequestOperationManager manager] GET:@"https://api.github.com/search/repositories?q=tetris+language:assembly&sort=stars&order=desc" parameters:Nil success:^(AFHTTPRequestOperation *operation, id responseObject) {
        NSData* data = [operation.responseData jq:@"[.items[] | { reuseIdentifier : \"JQCollectionViewCell\", headline : .owner.login, thumbnail: .owner.avatar_url, subhead: .name, body: .description }]"];
        self.data = [NSJSONSerialization JSONObjectWithData:data options:0 error:nil];
        [self.collectionView reloadData];
    } failure:^(AFHTTPRequestOperation *operation, NSError *error) {
        abort();
    }];
    // Do any additional setup after loading the view from its nib.
}

- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView *)collectionView{
    return 1;
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section{
    return [self.data count];
}

- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath{
    NSDictionary* data = self.data[indexPath.row];
    JQCollectionViewCell* cell = (JQCollectionViewCell*)[collectionView dequeueReusableCellWithReuseIdentifier:data[@"reuseIdentifier"] forIndexPath:indexPath];
    cell.headline = data[@"headline"];
    return  cell;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
