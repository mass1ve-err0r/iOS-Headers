//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface MSVCLICommand : NSObject
{
    NSDictionary *_cachedOptionsDictionary;
    NSString *_name;
    NSArray *_options;
}

@property(readonly, nonatomic) NSArray *options; // @synthesize options=_options;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)valueForOption:(id)arg1;
- (_Bool)containsOption:(id)arg1;
@property(readonly, nonatomic) NSDictionary *optionsDictionary;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 options:(id)arg2;

@end

