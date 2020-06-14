//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CUINamedRenditionInfo : NSObject
{
    void *_bitmap;
    const struct _renditionkeyfmt *_keyFormat;
}

- (void)incrementIndex:(unsigned long long *)arg1 inValues:(id)arg2 forAttribute:(int)arg3;
- (void)decrementValue:(long long *)arg1 forAttribute:(int)arg2;
- (unsigned long long)numberOfBitsSet;
- (void)clearAttributePresent:(int)arg1 withValue:(unsigned short)arg2;
- (void)setAttributePresent:(int)arg1 withValue:(unsigned short)arg2;
- (_Bool)diverseContentPresentForAttribute:(int)arg1;
- (_Bool)contentEqualForAttribute:(int)arg1 withRenditionInfo:(id)arg2;
- (_Bool)contentPresentForAttribute:(int)arg1;
- (int)attributePresent:(int)arg1 withValue:(unsigned short)arg2;
- (id)bitwiseAndWith:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToNamedRenditionInfo:(id)arg1;
- (id)archivedData;
- (void)dealloc;
- (id)_initWithKeyFormat:(const struct _renditionkeyfmt *)arg1 andBitmap:(void **)arg2;
- (id)initWithKeyFormat:(const struct _renditionkeyfmt *)arg1;
- (id)initWithData:(id)arg1 andKeyFormat:(const struct _renditionkeyfmt *)arg2;

@end

