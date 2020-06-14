//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface QLCacheSizeIconModePair : NSObject <NSCopying>
{
    _Bool _iconMode;
    float _size;
    unsigned long long _badgeType;
}

@property(readonly) unsigned long long badgeType; // @synthesize badgeType=_badgeType;
@property(readonly) _Bool iconMode; // @synthesize iconMode=_iconMode;
@property(readonly) float size; // @synthesize size=_size;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(float)arg1 iconMode:(_Bool)arg2 badgeType:(unsigned long long)arg3;
- (id)initWithThumbnailRequest:(id)arg1;

@end

