//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MKTransitInfoPreloader : NSObject
{
    NSArray *_transitLabels;
}

+ (id)separatorImageWithLineHeight:(double)arg1;
+ (id)attributedTextFromPreload:(id)arg1 view:(id)arg2;
- (void).cxx_destruct;
- (void)preloadWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithTransitLabels:(id)arg1;

@end

