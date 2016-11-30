//
//  ZCPickAreaHeadView.h
//  ZCPickCityAreasDemo
//
//  Created by Zeus on 16/11/30.
//  Copyright © 2016年 曹檑. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ZCPickAreaHeadView;
@protocol ShowCityDelegate <NSObject>
- (void)showCityWithPullSecondMenu:(ZCPickAreaHeadView *)selectView;
- (void)signWheatherSelected:(ZCPickAreaHeadView *)selectView;
@end

@interface ZCPickAreaHeadView : UITableViewHeaderFooterView
@property (nonatomic, strong) UIButton *selectButton;
@property (nonatomic, strong) UILabel *provLabel;
@property (nonatomic, strong) UIButton *pullButton;
@property (nonatomic, assign) id <ShowCityDelegate> delegate;

- (void)configureProvinceWithString:(NSString *)provStr;

@end
