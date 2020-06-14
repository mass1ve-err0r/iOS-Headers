//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLArgumentInternal.h>

@class MTLStructTypeInternal;

__attribute__((visibility("hidden")))
@interface MTLImageBlockDataArgument : MTLArgumentInternal
{
    unsigned int _dataSize;
    MTLStructTypeInternal *_masterStructMembers;
    _Bool _aliasImplicitImageBlock;
    unsigned int _aliasImplicitImageBlockRenderTarget;
}

- (void)setStructType:(id)arg1;
- (unsigned long long)aliasImplicitImageBlockRenderTarget;
- (_Bool)aliasImplicitImageBlock;
- (id)imageBlockMasterStructMembers;
- (unsigned long long)imageBlockDataSize;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(_Bool)arg4 index:(unsigned long long)arg5 dataSize:(unsigned int)arg6 masterStructMembers:(id)arg7 aliasImplicitImageBlock:(_Bool)arg8 aliasImplicitImageBlockRenderTarget:(unsigned int)arg9;

@end

