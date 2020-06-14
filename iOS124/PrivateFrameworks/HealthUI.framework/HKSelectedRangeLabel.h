//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@interface HKSelectedRangeLabel : UILabel
{
    struct UIEdgeInsets _padding;
}

+ (id)_stringForSelectedRangeData:(id)arg1;
+ (id)attributedStringForSelectedRangeData:(id)arg1 font:(id)arg2 foregroundColor:(id)arg3 prefersImageAffixes:(_Bool)arg4;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void)setSelectedRangeData:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)init;

@end

