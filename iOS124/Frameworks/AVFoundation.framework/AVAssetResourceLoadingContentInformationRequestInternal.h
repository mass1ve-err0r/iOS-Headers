//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetResourceLoadingContentInformationRequestInternal : NSObject
{
    NSString *contentType;
    NSArray *allowedContentTypes;
    long long contentLength;
    _Bool byteRangeAccessSupported;
    NSDate *renewalDate;
    _Bool diskCachingPermitted;
}

@end

