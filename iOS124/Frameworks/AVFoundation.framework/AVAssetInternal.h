//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVWeakReference, NSArray, NSString;
@protocol AVLoggingIdentifier;

__attribute__((visibility("hidden")))
@interface AVAssetInternal : NSObject
{
    AVWeakReference *weakReference;
    long long loadChapterInfoOnce;
    NSArray *chapterGroupInfo;
    NSString *anchorChapterType;
    NSArray *availableChapterLanguages;
    NSArray *availableCanonicalizedChapterLanguages;
    NSArray *availableChapterLocales;
    id <AVLoggingIdentifier> loggingIdentifier;
}

@end

