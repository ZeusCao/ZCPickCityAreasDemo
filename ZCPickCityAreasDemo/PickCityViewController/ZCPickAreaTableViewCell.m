//
//  ZCPickAreaTableViewCell.m
//  ZCPickCityAreasDemo
//
//  Created by Zeus on 16/11/30.
//  Copyright © 2016年 曹檑. All rights reserved.
//

#import "ZCPickAreaTableViewCell.h"

@implementation ZCPickAreaTableViewCell
- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    if (self = [super initWithStyle:style reuseIdentifier:reuseIdentifier]) {
        self.contentView.backgroundColor = WMShopBg;
        
        self.selectButton = [[UIButton alloc]initWithFrame:CGRectMake(54, 13 * KScreenWScale + 1, 20, 20)];
        [self.selectButton setImage:[UIImage imageNamed:@"wemart_sel_empty"] forState:UIControlStateNormal];
        [self.selectButton setImage:[UIImage imageNamed:@"wemart_selected"] forState:UIControlStateSelected];
        [self.contentView addSubview:_selectButton];
        
        self.cityLabel = [[UILabel alloc]initWithFrame:CGRectMake(91, 12, 200, 26 * KScreenWScale)];
        self.cityLabel.font = WMS1Font;
        self.cityLabel.textColor = WMContent2Color;
        self.cityLabel.textAlignment = NSTextAlignmentLeft;
        [self.contentView addSubview:_cityLabel];
        
        UIView *lineView = [[UIView alloc]initWithFrame:CGRectMake(0, 26 * KScreenWScale + 23, KScreenWidth, 0.5)];
        lineView.backgroundColor = WMLineColor;
        [self.contentView addSubview:lineView];
        
    }
    return self;
}

- (void)configureSelectCityTableViewCell:(NSString *)cityStr
{
    self.cityLabel.text = cityStr;
}
- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
