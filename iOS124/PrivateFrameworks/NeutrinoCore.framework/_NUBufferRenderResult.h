//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NUImageRenderResult.h>

#import <NeutrinoCore/NUBufferRenderResult-Protocol.h>

@class NSString, NUImageGeometry, NURegion;
@protocol NUBufferImage, NURenderStatistics;

@interface _NUBufferRenderResult : _NUImageRenderResult <NUBufferRenderResult>
{
    id <NUBufferImage> _image;
}

@property(retain) id <NUBufferImage> image; // @synthesize image=_image;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NUImageGeometry *geometry;
@property(readonly) unsigned long long hash;
@property(readonly) NURegion *region;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end

