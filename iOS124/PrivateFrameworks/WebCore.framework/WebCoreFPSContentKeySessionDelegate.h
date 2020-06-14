//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AVContentKeySessionDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreFPSContentKeySessionDelegate : NSObject <AVContentKeySessionDelegate>
{
    struct CDMInstanceSessionFairPlayStreamingAVFObjC *_parent;
}

- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1;
- (_Bool)contentKeySession:(id)arg1 shouldRetryContentKeyRequest:(id)arg2 reason:(id)arg3;
- (void)contentKeySession:(id)arg1 contentKeyRequestDidSucceed:(id)arg2;
- (void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3;
- (void)contentKeySession:(id)arg1 didUpdatePersistableContentKey:(id)arg2 forContentKeyIdentifier:(id)arg3;
- (void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideRenewingContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)invalidate;
- (id)initWithParent:(struct CDMInstanceSessionFairPlayStreamingAVFObjC *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

