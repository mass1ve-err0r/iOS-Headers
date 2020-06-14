//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSScanner.h>

@interface NSScanner (NUPatternAdditions)
- (id)substringFromScanLocation;
- (_Bool)scanRepeatPattern:(inout id *)arg1 error:(out id *)arg2;
- (_Bool)scanPatterns:(out id *)arg1 from:(id)arg2 to:(id)arg3 delimiter:(id)arg4 error:(out id *)arg5;
- (_Bool)scanChoicePattern:(out id *)arg1 error:(out id *)arg2;
- (_Bool)scanGroupPattern:(out id *)arg1 error:(out id *)arg2;
- (_Bool)scanListPattern:(out id *)arg1 error:(out id *)arg2;
- (_Bool)scanTokenPattern:(out id *)arg1 error:(out id *)arg2;
- (_Bool)scanPattern:(out id *)arg1 error:(out id *)arg2;
@end

