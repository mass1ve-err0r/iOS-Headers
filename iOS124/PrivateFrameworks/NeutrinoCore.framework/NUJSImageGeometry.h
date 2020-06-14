//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUJSProxy.h>

#import <NeutrinoCore/NUJSImageGeometryExport-Protocol.h>

@class NUImageGeometry, NUJSScale;

@interface NUJSImageGeometry : NUJSProxy <NUJSImageGeometryExport>
{
}

@property(readonly) long long orientation;
@property(readonly) struct CGSize size;
@property(readonly) struct CGRect extent;
@property(readonly) NUJSScale *scale;
@property(readonly) NUImageGeometry *geometry;
- (id)initWithGeometry:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end

