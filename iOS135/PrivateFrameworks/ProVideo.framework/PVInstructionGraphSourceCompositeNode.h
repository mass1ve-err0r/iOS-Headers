/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVInstructionGraphSourceCompositeNode : PVInstructionGraphSourceNode {
    <PVCompositeDelegate> * _delegate;
    PVInstructionGraphNode * _graphNode;
    PVImageBuffer * _imageBuffer;
    NSString * _imageKey;
    <PVImageSeqDelegate> * _imageSeqDelegate;
    NSURL * _imageURL;
    NSDictionary * _inputMap;
    NSObject * _metadata;
    int  _nodeType;
    unsigned int  _outputFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _outputSize;
    <PVCompositeDelegate> * _renderDelegate;
    struct HGRef<PVRenderManager> { 
        struct PVRenderManager {} *m_Obj; 
    }  _renderManager;
    int  _trackID;
}

@property (nonatomic, retain) <PVCompositeDelegate> *delegate;
@property (nonatomic, retain) PVInstructionGraphNode *graphNode;
@property (nonatomic, retain) PVImageBuffer *imageBuffer;
@property (nonatomic, retain) NSString *imageKey;
@property (nonatomic, retain) <PVImageSeqDelegate> *imageSeqDelegate;
@property (nonatomic, retain) NSURL *imageURL;
@property (nonatomic, retain) NSDictionary *inputMap;
@property (nonatomic, retain) NSObject *metadata;
@property (nonatomic) int nodeType;
@property (nonatomic) unsigned int outputFormat;
@property (nonatomic) struct CGSize { double x1; double x2; } outputSize;
@property (nonatomic, retain) <PVCompositeDelegate> *renderDelegate;
@property (nonatomic) int trackID;

+ (id)newSourceCompositeNodeWithDelegate:(id)arg1 inputs:(id)arg2 metadata:(id)arg3 outputSize:(struct CGSize { double x1; double x2; })arg4 outputFormat:(unsigned int)arg5;
+ (id)newSourceCompositeNodeWithGraphNode:(id)arg1 outputSize:(struct CGSize { double x1; double x2; })arg2 outputFormat:(unsigned int)arg3;
+ (id)newSourceCompositeNodeWithPVImageBuffer:(id)arg1;
+ (id)newSourceCompositeNodeWithTrack:(int)arg1 outputSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)newSourceCompositeNodeWithURL:(id)arg1 key:(id)arg2 imageDelegate:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDotTreeLinks:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1;
- (id)delegate;
- (id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1;
- (id)getAllSourceNodes;
- (id)graphNode;
- (id)imageBuffer;
- (id)imageKey;
- (id)imageSeqDelegate;
- (id)imageURL;
- (id)init;
- (id)inputMap;
- (struct PCRect<double> { double x1; double x2; double x3; double x4; })inputSizeForPVEffect:(id)arg1 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;
- (id)instructionGraphNodeDescription;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })internalHGNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trackInputs:(const struct PVInputHGNodeMap<PVInstructionGraphSourceNode *> { struct map<PVInstructionGraphSourceNode *, HGRef<HGNode>, std::__1::less<PVInstructionGraphSourceNode *>, std::__1::allocator<std::__1::pair<PVInstructionGraphSourceNode *const, HGRef<HGNode> > > > { struct __tree<std::__1::__value_type<PVInstructionGraphSourceNode *, HGRef<HGNode> >, std::__1::__map_value_compare<PVInstructionGraphSourceNode *, std::__1::__value_type<PVInstructionGraphSourceNode *, HGRef<HGNode> >, std::__1::less<PVInstructionGraphSourceNode *>, true>, std::__1::allocator<std::__1::__value_type<PVInstructionGraphSourceNode *, HGRef<HGNode> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<PVInstructionGraphSourceNode *, HGRef<HGNode> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<PVInstructionGraphSourceNode *, std::__1::__value_type<PVInstructionGraphSourceNode *, HGRef<HGNode> >, std::__1::less<PVInstructionGraphSourceNode *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)arg2 renderer:(const struct HGRef<HGRenderer> { }*)arg3 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg4;
- (void)loadIGNode:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1 returnLoadedEffects:(id)arg2;
- (id)metadata;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })nodeForCompositeTrackMap:(const struct map<int, __CVBuffer *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, __CVBuffer *> > > { struct __tree<std::__1::__value_type<int, __CVBuffer *>, std::__1::__map_value_compare<int, std::__1::__value_type<int, __CVBuffer *>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, __CVBuffer *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, __CVBuffer *>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, __CVBuffer *>, std::__1::less<int>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1;
- (int)nodeType;
- (unsigned int)outputFormat;
- (struct CGSize { double x1; double x2; })outputSize;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })pixelTransformForPVEffect:(id)arg1 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;
- (id)renderDelegate;
- (id)renderFrameForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inputs:(id)arg2;
- (id)requiredSourceTrackIDs;
- (void)setDelegate:(id)arg1;
- (void)setGraphNode:(id)arg1;
- (void)setImageBuffer:(id)arg1;
- (void)setImageKey:(id)arg1;
- (void)setImageSeqDelegate:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setInputMap:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNodeType:(int)arg1;
- (void)setOutputFormat:(unsigned int)arg1;
- (void)setOutputSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRenderDelegate:(id)arg1;
- (void)setTrackID:(int)arg1;
- (int)trackID;
- (void)unloadIGNode;

@end