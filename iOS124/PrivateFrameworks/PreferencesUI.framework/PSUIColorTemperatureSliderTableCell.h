//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSSliderTableCell.h>

@class UILabel;

@interface PSUIColorTemperatureSliderTableCell : PSSliderTableCell
{
    UILabel *_coolerLabel;
    UILabel *_warmerLabel;
    double _horizontalMargin;
    double _verticalMargin;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

