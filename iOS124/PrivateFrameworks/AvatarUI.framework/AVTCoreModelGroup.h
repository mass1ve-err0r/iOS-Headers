//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AVTCoreModelGroup : NSObject
{
    NSString *_name;
    NSArray *_categories;
}

@property(readonly, copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 categories:(id)arg2;

@end

