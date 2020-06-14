//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIComingSoonCardLayout : TVViewLayout
{
    VUITextLayout *_titleLayout;
    VUITextLayout *_textLayout;
    struct TVCornerRadii _borderRadii;
}

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
@property(nonatomic) struct TVCornerRadii borderRadii; // @synthesize borderRadii=_borderRadii;
@property(readonly, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;
@property(readonly, nonatomic) VUITextLayout *titleLayout; // @synthesize titleLayout=_titleLayout;
- (void).cxx_destruct;
- (id)init;

@end

