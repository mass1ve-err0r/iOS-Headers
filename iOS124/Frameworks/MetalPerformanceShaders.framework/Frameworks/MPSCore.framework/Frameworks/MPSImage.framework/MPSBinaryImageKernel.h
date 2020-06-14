//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSKernel.h>

@interface MPSBinaryImageKernel : MPSKernel
{
    CDStruct_1e3be3a8 _clipRect;
    CDStruct_d6af7fc0 _primaryOffset;
    CDStruct_d6af7fc0 _secondaryOffset;
    unsigned long long _primaryEdgeMode;
    unsigned long long _secondaryEdgeMode;
    int _checkFlags;
    CDUnknownFunctionPointerType _encode;
    void *_encodeData;
    const CDStruct_14f26992 *_preferredTileSize;
}

@property(nonatomic) CDStruct_1e3be3a8 clipRect; // @synthesize clipRect=_clipRect;
@property(nonatomic) unsigned long long secondaryEdgeMode; // @synthesize secondaryEdgeMode=_secondaryEdgeMode;
@property(nonatomic) unsigned long long primaryEdgeMode; // @synthesize primaryEdgeMode=_primaryEdgeMode;
@property(nonatomic) CDStruct_d6af7fc0 secondaryOffset; // @synthesize secondaryOffset=_secondaryOffset;
@property(nonatomic) CDStruct_d6af7fc0 primaryOffset; // @synthesize primaryOffset=_primaryOffset;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (struct MPSRegion)secondarySourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (struct MPSRegion)primarySourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (void)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 destinationImage:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 primaryTexture:(id)arg2 secondaryTexture:(id)arg3 destinationTexture:(id)arg4;
- (_Bool)encodeToCommandBuffer:(id)arg1 inPlacePrimaryTexture:(id *)arg2 secondaryTexture:(id)arg3 fallbackCopyAllocator:(CDUnknownBlockType)arg4;
- (_Bool)encodeToCommandBuffer:(id)arg1 primaryTexture:(id)arg2 inPlaceSecondaryTexture:(id *)arg3 fallbackCopyAllocator:(CDUnknownBlockType)arg4;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)init;

@end

