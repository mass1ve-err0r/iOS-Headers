//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface TSUDelimitedValuesParserProvider : NSObject
{
    NSURL *_url;
}

@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (_Bool)isCSV;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

