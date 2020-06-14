//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADFontReference : NSObject <NSCopying>
{
    int mIndex;
    OADColor *mColor;
}

- (id)description;
- (void)applyToParagraphProperties:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setIndex:(int)arg1;
- (int)index;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

