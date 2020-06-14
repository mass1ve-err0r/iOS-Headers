//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCH3DShaderStatement-Protocol.h>

@class NSArray, NSString, TSCH3DShaderProgram, TSCH3DShaderVariableLinkage;

__attribute__((visibility("hidden")))
@interface TSCH3DShaderAssignment : NSObject <TSCH3DShaderStatement>
{
    TSCH3DShaderVariableLinkage *mAssignee;
    struct TSCH3DShaderVariableScopeType mAssigneeScope;
    NSString *mStatement;
    NSArray *mDependees;
    TSCH3DShaderProgram *mProgram;
    struct TSCH3DShaderType mLinkageType;
    vector_22c20f1a mDependeeScopes;
}

+ (id)assignmentWithAssignee:(id)arg1 statement:(id)arg2 dependees:(id)arg3 program:(id)arg4;
@property(readonly, nonatomic) struct TSCH3DShaderVariableScopeType assigneeScope; // @synthesize assigneeScope=mAssigneeScope;
@property(nonatomic) struct TSCH3DShaderType linkageType; // @synthesize linkageType=mLinkageType;
@property(readonly, nonatomic) NSArray *dependees; // @synthesize dependees=mDependees;
@property(readonly, nonatomic) TSCH3DShaderVariableLinkage *assignee; // @synthesize assignee=mAssignee;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setAssigneeScopeToType:(struct TSCH3DShaderVariableScopeType)arg1;
- (void)setGeneratedForType:(struct TSCH3DShaderType)arg1;
@property(readonly, nonatomic) NSString *string;
- (id)variableDeclaration;
- (id)expressionStringForType:(struct TSCH3DShaderType)arg1;
- (id)resolve;
- (id)forceLinkageForType:(struct TSCH3DShaderType)arg1;
- (id)resolveDependeesWithPreviousType:(struct TSCH3DShaderType)arg1;
- (_Bool)updateLinkageTypeAddVaryingToAdditions:(id)arg1;
- (struct TSCH3DShaderType)dominantDependeeLinkageType;
- (id)updateDependeesWithPreviousType:(struct TSCH3DShaderType)arg1;
- (id)updateVaryingAssignmentForLinkage:(id)arg1;
- (id)varyingAssignmentForLinkage:(id)arg1;
- (vector_22c20f1a *)dependeeScopes;
@property(readonly, nonatomic) _Bool isLinked;
- (_Bool)isMetal;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithAssigneeLinkage:(id)arg1 statement:(id)arg2 dependees:(id)arg3 program:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

