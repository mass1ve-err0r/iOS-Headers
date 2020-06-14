//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARResultDataContext-Protocol.h>

@class NSString;

@interface ARPoseContext : NSObject <ARResultDataContext>
{
    long long _cameraPosition;
    CDUnknownBlockType _cameraTransformCallback;
}

@property(copy, nonatomic) CDUnknownBlockType cameraTransformCallback; // @synthesize cameraTransformCallback=_cameraTransformCallback;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
- (void).cxx_destruct;
- (id)resultDataOfClass:(Class)arg1;
- (id)imageData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

