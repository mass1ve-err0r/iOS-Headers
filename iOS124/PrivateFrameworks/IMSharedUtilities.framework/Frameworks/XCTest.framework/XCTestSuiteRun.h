//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTest/XCTestRun.h>

@class NSArray, NSMutableArray;

@interface XCTestSuiteRun : XCTestRun
{
    NSMutableArray *_testRuns;
}

- (void).cxx_destruct;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(_Bool)arg4;
- (double)testDuration;
- (unsigned long long)unexpectedExceptionCount;
- (unsigned long long)failureCount;
- (unsigned long long)executionCount;
- (void)addTestRun:(id)arg1;
@property(readonly, copy) NSArray *testRuns;
- (void)stop;
- (void)start;
- (id)initWithTest:(id)arg1;

@end

