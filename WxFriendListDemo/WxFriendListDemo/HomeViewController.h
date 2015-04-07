//
//  HomeViewController.h
//  WxFriendListDemo
//
//  Created by 宋志明 on 15-4-3.
//  Copyright (c) 2015年 songzm. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HomeViewController : UIViewController
{
    __weak IBOutlet UITableView *friendListTableView;
    NSArray *friendListArray;
    NSArray *sortedFriendListArray;
}
@property (strong, nonatomic) NSMutableArray *sectionTitles;
@end
