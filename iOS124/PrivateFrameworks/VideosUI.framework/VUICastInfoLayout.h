//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUICastInfoLayout : TVViewLayout
{
    VUITextLayout *_headerTextLayout;
    VUITextLayout *_textLayout;
}

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
@property(readonly, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;
@property(readonly, nonatomic) VUITextLayout *headerTextLayout; // @synthesize headerTextLayout=_headerTextLayout;
- (void).cxx_destruct;
- (id)init;

@end

