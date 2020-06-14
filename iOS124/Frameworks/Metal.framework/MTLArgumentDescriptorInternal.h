//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLArgumentDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLArgumentDescriptorInternal : MTLArgumentDescriptor
{
    struct MTLArgumentDescriptorPrivate _private;
}

+ (id)indirectArgumentDescriptor;
- (void)setConstantBlockAlignment:(unsigned long long)arg1;
- (unsigned long long)constantBlockAlignment;
- (void)setTextureType:(unsigned long long)arg1;
- (unsigned long long)textureType;
- (void)setAccess:(unsigned long long)arg1;
- (unsigned long long)access;
- (void)setArrayLength:(unsigned long long)arg1;
- (unsigned long long)arrayLength;
- (void)setIndex:(unsigned long long)arg1;
- (unsigned long long)index;
- (void)setDataType:(unsigned long long)arg1;
- (unsigned long long)dataType;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

