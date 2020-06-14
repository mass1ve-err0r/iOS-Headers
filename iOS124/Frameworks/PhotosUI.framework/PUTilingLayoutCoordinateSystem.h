//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUTilingCoordinateSystem-Protocol.h>

@class NSString;
@protocol PUTilingCoordinateSystem;

__attribute__((visibility("hidden")))
@interface PUTilingLayoutCoordinateSystem : NSObject <PUTilingCoordinateSystem>
{
    id <PUTilingCoordinateSystem> _parentCoordinateSystem;
    struct CGPoint _coordinateSystemOrigin;
}

@property(nonatomic) struct CGPoint coordinateSystemOrigin; // @synthesize coordinateSystemOrigin=_coordinateSystemOrigin;
@property(nonatomic) __weak id <PUTilingCoordinateSystem> parentCoordinateSystem; // @synthesize parentCoordinateSystem=_parentCoordinateSystem;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

