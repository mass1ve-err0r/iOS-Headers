//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface _SFSearchRequest : NSObject
{
    long long _searchTypes;
    NSDictionary *_headerFields;
    NSDictionary *_queryParameters;
}

@property(copy, nonatomic) NSDictionary *queryParameters; // @synthesize queryParameters=_queryParameters;
@property(copy, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(nonatomic) long long searchTypes; // @synthesize searchTypes=_searchTypes;
- (void).cxx_destruct;

@end

