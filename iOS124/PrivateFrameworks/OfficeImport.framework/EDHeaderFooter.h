//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDHeaderFooter : NSObject
{
    NSString *mHeaderString;
    NSString *mFooterString;
}

+ (id)headerFooter;
- (id)description;
- (void)setFooterString:(id)arg1;
- (id)footerString;
- (void)setHeaderString:(id)arg1;
- (id)headerString;
- (void)dealloc;

@end

