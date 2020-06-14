//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSDSizedImageDescription : NSObject <NSCopying>
{
    _Bool _isWideGamut;
    _Bool _hasBakedMask;
    struct CGSize _size;
}

@property(readonly, nonatomic) _Bool hasBakedMask; // @synthesize hasBakedMask=_hasBakedMask;
@property(readonly, nonatomic) _Bool isWideGamut; // @synthesize isWideGamut=_isWideGamut;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (_Bool)isEqualToSizedImageDescription:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(struct CGSize)arg1 isWideGamut:(_Bool)arg2 hasBakedMask:(_Bool)arg3;

@end

