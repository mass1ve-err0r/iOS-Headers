//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

#import <TouchML/NSURLJSExports-Protocol.h>

@class NSDictionary, NSString;

@interface NSURL (TouchML) <NSURLJSExports>
+ (void)initializeJSContext:(id)arg1;
- (id)filterQueryParameters:(id)arg1;
- (id)withQueryParameters:(id)arg1;
- (id)withQueryParameter:(id)arg1:(id)arg2;
@property(readonly, nonatomic) NSDictionary *queryParameters;

// Remaining properties
@property(readonly, nonatomic) NSString *absoluteString;
@property(readonly, nonatomic) NSString *resourceSpecifier;
@property(readonly, nonatomic) NSString *scheme;
@end

