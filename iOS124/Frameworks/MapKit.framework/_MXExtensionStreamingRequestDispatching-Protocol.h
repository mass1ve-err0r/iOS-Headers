//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class NSObject, Protocol;
@protocol NSObject, NSSecureCoding, _MXExtensionResponseObserver;

@protocol _MXExtensionStreamingRequestDispatching <NSObject>
- (void)stopSendingUpdatesForRequest:(NSObject<NSSecureCoding> *)arg1 vendor:(id <NSObject>)arg2;
- (void)startSendingUpdatesForRequest:(NSObject<NSSecureCoding> *)arg1 vendor:(id <NSObject>)arg2 toObserver:(id <_MXExtensionResponseObserver>)arg3;

@optional
- (Protocol *)serviceProtocol;
@end

