//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, WDText;

__attribute__((visibility("hidden")))
@interface WDAnnotationData : NSObject
{
    WDText *mText;
    NSDate *mDate;
    NSString *mOwner;
}

- (void)dealloc;
- (void)setOwner:(id)arg1;
- (id)owner;
- (void)setDate:(id)arg1;
- (id)date;
- (id)text;
- (id)initWithText:(id)arg1;

@end

