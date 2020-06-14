//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/EDImmutableObject-Protocol.h>
#import <OfficeImport/NSCopying-Protocol.h>

@class EDCollection, EDResources, NSString;

__attribute__((visibility("hidden")))
@interface EDPhoneticInfo : NSObject <NSCopying, EDImmutableObject>
{
    EDResources *mResources;
    unsigned long long mFontIndex;
    NSString *mString;
    int mType;
    int mAlign;
    EDCollection *mRuns;
    _Bool mDoNotModify;
}

+ (id)phoneticInfoWithResources:(id)arg1;
- (void)setDoNotModify:(_Bool)arg1;
- (id)runs;
- (void)setFont:(id)arg1;
- (id)font;
- (void)appendString:(id)arg1;
- (void)prependString:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;
- (void)setAlign:(int)arg1;
- (int)align;
- (void)setType:(int)arg1;
- (int)type;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToEDPhoneticInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithResources:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)setFontIndex:(unsigned long long)arg1;
- (unsigned long long)fontIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

