//
//  ZCShowCityTableViewCell.h
//  ZCPickCityAreasDemo
//
//  Created by Zeus on 16/11/30.
//  Copyright © 2016年 曹檑. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZCShowCityTableViewCell : UITableViewCell
@property (nonatomic, strong) UILabel *areaLabel;
@property (nonatomic, strong) UIImageView *enterImgView;
@property (nonatomic, strong) UIView *stripeLine;

- (void)configureAreaLabelWithDic:(NSDictionary *)fareDic;
+ (CGFloat)configureAreaSeeCellHeightWithDic:(NSDictionary *)fareDic;
@end
