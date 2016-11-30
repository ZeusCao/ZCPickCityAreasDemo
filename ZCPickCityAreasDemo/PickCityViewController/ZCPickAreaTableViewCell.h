//
//  ZCPickAreaTableViewCell.h
//  ZCPickCityAreasDemo
//
//  Created by Zeus on 16/11/30.
//  Copyright © 2016年 曹檑. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZCPickAreaTableViewCell : UITableViewCell
@property (nonatomic, strong) UIButton *selectButton;
@property (nonatomic, strong) UILabel *cityLabel;


- (void)configureSelectCityTableViewCell:(NSString *)cityStr;

@end
