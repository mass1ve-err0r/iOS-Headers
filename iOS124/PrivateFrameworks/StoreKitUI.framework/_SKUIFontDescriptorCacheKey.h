//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _SKUIFontDescriptorCacheKey : NSObject
{
    const struct __CFString *_textStyle;
    NSString *_sizeCategory;
}

@property(readonly, nonatomic) NSString *sizeCategory; // @synthesize sizeCategory=_sizeCategory;
@property(readonly, nonatomic) const struct __CFString *textStyle; // @synthesize textStyle=_textStyle;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTextStyle:(const struct __CFString *)arg1 sizeCategory:(id)arg2;

@end

