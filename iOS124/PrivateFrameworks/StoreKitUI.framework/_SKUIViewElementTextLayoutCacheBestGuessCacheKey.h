//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIFont;

@interface _SKUIViewElementTextLayoutCacheBestGuessCacheKey : NSObject
{
    NSString *_text;
    UIFont *_font;
    long long _width;
}

@property(nonatomic) long long width; // @synthesize width=_width;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

