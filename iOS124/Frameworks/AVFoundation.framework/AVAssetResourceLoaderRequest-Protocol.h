//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/NSObject-Protocol.h>

@class AVWeakReference, NSDictionary;

@protocol AVAssetResourceLoaderRequest <NSObject>
+ (SEL)_selectorForInformingDelegateOfCancellationByFig;
- (_Bool)_shouldInformDelegateOfFigCancellation;
- (void)_performCancellationByClient;
- (NSDictionary *)_requestDictionary;
- (unsigned long long)_requestID;
- (struct __CFDictionary *)_requestInfo;
- (AVWeakReference *)_weakReference;
@end

