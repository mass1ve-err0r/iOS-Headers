//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHMediaRequest.h>

@class PDImageDecoder, PHImageDisplaySpec, PHImageRequestBehaviorSpec;
@protocol PHImageRequestDelegate;

@interface PDImageRequest : PHMediaRequest
{
    struct os_unfair_lock_s _lock;
    unsigned long long _decodeRequestID;
    PDImageDecoder *_chosenDecoder;
    _Bool _forceIgnoreCache;
    id <PHImageRequestDelegate> _delegate;
    PHImageDisplaySpec *_displaySpec;
    PHImageRequestBehaviorSpec *_behaviorSpec;
}

@property(retain, nonatomic) PHImageRequestBehaviorSpec *behaviorSpec; // @synthesize behaviorSpec=_behaviorSpec;
@property(retain, nonatomic) PHImageDisplaySpec *displaySpec; // @synthesize displaySpec=_displaySpec;
@property(nonatomic) __weak id <PHImageRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleAvailabilityChangeForResource:(id)arg1 locallyAvailable:(_Bool)arg2 info:(id)arg3 error:(id)arg4;
- (void)startRequest;
- (id)description;
- (void)cancel;
- (_Bool)isSynchronous;
- (void)prepareForReuse;
- (id)initWithRequestID:(int)arg1 contextID:(unsigned long long)arg2 managerID:(unsigned long long)arg3 asset:(id)arg4 displaySpec:(id)arg5 behaviorSepc:(id)arg6;
- (void)_tryChoosingFromFullResourceListForTargetSize:(struct CGSize)arg1;
- (void)_tryChoosingFromFromHintsForRequestSize:(struct CGSize)arg1 excludingKeys:(id)arg2;

@end

