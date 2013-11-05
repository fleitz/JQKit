//
//  JQRepoViewController.m
//  JQKit
//
//  Created by Fred Leitz on 11/4/2013.
//  Copyright (c) 2013 Fred Leitz. All rights reserved.
//

#import "JQRepoViewController.h"
#import <JQKit/JQKit.h>
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

- (void)awakeFromNib{
    
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    [[AFHTTPRequestOperationManager manager] GET:@"https://api.github.com/search/repositories?q=tetris+language:assembly&sort=stars&order=desc" parameters:Nil success:^(AFHTTPRequestOperation *operation, id responseObject) {
//        NSData* data = [operation.responseData ]
        
        NSLog(@"%@",responseObject);
    } failure:^(AFHTTPRequestOperation *operation, NSError *error) {
        abort();
    }];
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
