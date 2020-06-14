//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SXPresentationAttributes : NSObject
{
    _Bool _fadeInComponents;
    _Bool _enableViewportDebugging;
    _Bool _testingConditionEnabled;
    NSString *_contentSizeCategory;
    unsigned long long _presentationMode;
    struct CGSize _canvasSize;
}

@property(nonatomic) _Bool testingConditionEnabled; // @synthesize testingConditionEnabled=_testingConditionEnabled;
@property(nonatomic) _Bool enableViewportDebugging; // @synthesize enableViewportDebugging=_enableViewportDebugging;
@property(nonatomic) _Bool fadeInComponents; // @synthesize fadeInComponents=_fadeInComponents;
@property(nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(retain, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) _Bool fadeWhenTransitioning;

@end

