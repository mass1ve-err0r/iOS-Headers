//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WDParagraph;

__attribute__((visibility("hidden")))
@interface WDRun : NSObject
{
    WDParagraph *mParagraph;
}

- (id)description;
- (void)clearProperties;
- (_Bool)isEmpty;
- (void)dealloc;
- (id)initWithParagraph:(id)arg1;
- (id)init;
- (id)paragraph;
- (int)runType;

@end

