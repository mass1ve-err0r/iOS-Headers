//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface RKResponse : NSObject
{
    NSString *_string;
    NSDictionary *_attributes;
    NSString *_category;
}

@property(retain) NSString *category; // @synthesize category=_category;
@property(retain) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)initWithString:(id)arg1 attributes:(id)arg2 category:(id)arg3;

@end

