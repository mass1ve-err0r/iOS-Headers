//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSFormAutoFillParsecCrowdsourcedCorrectionsProcessor : NSObject
{
}

+ (id)test_correctionsSchema;
+ (id)_schemaWithExpectedClass:(Class)arg1 errorCode:(long long)arg2 isOptional:(_Bool)arg3;
+ (id)_correctionsSchema;
- (id)_correctionsStore;
- (void)setCorrectionsWithJSONData:(id)arg1 retrievalURLString:(id)arg2;
- (void)getLastCorrectionsRetrievalURLStringWithResultHandler:(CDUnknownBlockType)arg1;

@end

