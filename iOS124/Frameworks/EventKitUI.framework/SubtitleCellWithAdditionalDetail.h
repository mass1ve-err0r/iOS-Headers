//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKUITableViewCell.h>

@class UILabel;

@interface SubtitleCellWithAdditionalDetail : EKUITableViewCell
{
    UILabel *_additionalDetailLabel;
    id _source;
}

@property id source; // @synthesize source=_source;
- (void).cxx_destruct;
- (_Bool)leftFrame:(struct CGRect)arg1 overlapsRightFrame:(struct CGRect)arg2 difference:(double *)arg3;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, retain, nonatomic) UILabel *additionalDetailLabel;

@end

