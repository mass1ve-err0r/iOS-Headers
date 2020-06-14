//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDMediaCompatibilityChecker-Protocol.h>

@class NSError, NSString, TSPData;

__attribute__((visibility("hidden")))
@interface TSDImageCompatibilityChecker : NSObject <TSDMediaCompatibilityChecker>
{
    TSPData *mImageData;
    long long mCompatibilityLevel;
    NSError *mError;
    _Atomic _Bool mCancelled;
}

+ (_Bool)platformSupportsHEIF;
+ (void)initialize;
@property(readonly, nonatomic) NSError *error; // @synthesize error=mError;
@property(readonly, nonatomic) long long compatibilityLevel; // @synthesize compatibilityLevel=mCompatibilityLevel;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (void)cancel;
- (void)checkCompatibilityUpToLevel:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithImageData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

