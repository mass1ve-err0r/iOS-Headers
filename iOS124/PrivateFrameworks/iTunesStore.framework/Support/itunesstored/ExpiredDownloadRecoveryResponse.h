//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface ExpiredDownloadRecoveryResponse : NSObject
{
    long long _downloadIdentifier;
    NSError *_error;
    long long _result;
}

@property(nonatomic) long long result; // @synthesize result=_result;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;
- (void).cxx_destruct;

@end

