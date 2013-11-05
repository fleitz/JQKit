//
//  JQCollectionViewCell.h
//  JQKit
//
//  Created by Fred Leitz on 11/4/2013.
//  Copyright (c) 2013 Fred Leitz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JQCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *thumbnail;
@property (weak, nonatomic) IBOutlet UILabel *headline;
@property (weak, nonatomic) IBOutlet UILabel *subhead;
@property (weak, nonatomic) IBOutlet UILabel *body;

@end
