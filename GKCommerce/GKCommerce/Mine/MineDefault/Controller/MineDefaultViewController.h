//
//  MineViewController.h
//  GKCommerce
//
//  Created by 小悟空 on 14/11/7.
//  Copyright (c) 2014年 GKCommerce. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MineHeaderPhotoTableViewCell.h"

@interface MineDefaultViewController : UIViewController
<UITableViewDataSource, UITableViewDelegate,
MineHeaderPhotoTableViewCellDelegate>

@property (strong, nonatomic) GKUser *user;
@property (strong, nonatomic) IBOutlet UITableView *tableView;

- (void)pushAddressList;
@end
