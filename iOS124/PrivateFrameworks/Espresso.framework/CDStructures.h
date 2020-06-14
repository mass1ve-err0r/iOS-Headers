//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct FaceLandmarkDetectorPoint;

struct FaceList {
    struct list<vision::DCN::boundingbox, std::__1::allocator<vision::DCN::boundingbox>> _field1;
};

struct __CVBuffer;

struct __list_node_base<vision::DCN::boundingbox, void *> {
    struct __list_node_base<vision::DCN::boundingbox, void *> *_field1;
    struct __list_node_base<vision::DCN::boundingbox, void *> *_field2;
};

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct _mxnetTools_imageHeader_t_ {
    unsigned int flag;
    float label;
    struct _mxnetTools_imageID_t_ imageID;
};

struct _mxnetTools_imageID_t_ {
    unsigned long long ID[2];
};

struct _mxnetTools_recordHeader_t_ {
    unsigned int magic;
    unsigned int lrecord;
};

struct abstract_context;

struct base_kernel;

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long __cap_;
                    unsigned long long __size_;
                    char *__data_;
                } __l;
                struct __short {
                    union {
                        unsigned char __size_;
                        char __lx;
                    } ;
                    char __data_[23];
                } __s;
                struct __raw {
                    unsigned long long __words[3];
                } __r;
            } ;
        } __value_;
    } __r_;
};

struct blob<float, 1>;

struct blob<float, 2>;

struct blob<float, 3>;

struct blob<float, 4>;

struct blob<unsigned char __attribute__((ext_vector_type(4))), 2>;

struct fast_pyramid_resizer;

struct function<void (const std::__1::shared_ptr<Espresso::abstract_batch>&, const Espresso::layer &)> {
    struct type _field1;
    struct __base<void (const std::__1::shared_ptr<Espresso::abstract_batch>&, const Espresso::layer &)> *_field2;
};

struct generic_load_constant_kernel;

struct layer {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field5;
    struct shared_ptr<Espresso::base_kernel> _field6;
    struct layer_data _field7;
    struct layer_data _field8;
    struct function<void (const std::__1::shared_ptr<Espresso::abstract_batch>&, const Espresso::layer &)> _field9;
};

struct layer_data {
    struct vector<std::__1::shared_ptr<Espresso::abstract_blob_container>, std::__1::allocator<std::__1::shared_ptr<Espresso::abstract_blob_container>>> _field1;
};

struct list<vision::DCN::boundingbox, std::__1::allocator<vision::DCN::boundingbox>> {
    struct __list_node_base<vision::DCN::boundingbox, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<vision::DCN::boundingbox, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct map<int, ETDataPoint *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, ETDataPoint *>>> {
    struct __tree<std::__1::__value_type<int, ETDataPoint *>, std::__1::__map_value_compare<int, std::__1::__value_type<int, ETDataPoint *>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, ETDataPoint *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, ETDataPoint *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, ETDataPoint *>, std::__1::less<int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<std::__1::basic_string<char>, ETDataPoint_buffer, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, ETDataPoint_buffer>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, ETDataPoint_buffer>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, ETDataPoint_buffer>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, ETDataPoint_buffer>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, ETDataPoint_buffer>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, ETDataPoint_buffer>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, float>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, float>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4>>>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4>>>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4>>>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4>>>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<std::__1::basic_string<char>, std::__1::vector<int, std::__1::allocator<int>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::vector<int, std::__1::allocator<int>>>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<int, std::__1::allocator<int>>>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<int, std::__1::allocator<int>>>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<int, std::__1::allocator<int>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<int, std::__1::allocator<int>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<int, std::__1::allocator<int>>>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::__1::basic_string<char>, vImage_Buffer, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, vImage_Buffer>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, vImage_Buffer>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, vImage_Buffer>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, vImage_Buffer>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, vImage_Buffer>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, vImage_Buffer>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct net;

struct net_strides_configuration {
    int num_layer;
    struct vector<int, std::__1::allocator<int>> kernel_size;
    struct vector<int, std::__1::allocator<int>> stride;
    struct vector<int, std::__1::allocator<int>> pad;
};

struct options {
    float lr;
    float lr_decay_epoch;
    float momentum;
    float weight_decay;
    _Bool l2_regularization;
    int verbose;
};

struct pair<int, int> {
    int _field1;
    int _field2;
};

struct pair<unsigned long long, unsigned long long> {
    unsigned long long first;
    unsigned long long second;
};

struct postprocessing_settings_t {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> name;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> network;
    int do_blend;
    float blend_alpha;
    int grayscale_i0;
    int grayscale_i1;
    float temporal_alpha;
    float gamma;
    float saturation;
    float contrast;
    float brightness;
    int color_transfer_mode;
    int width;
    int height;
    int width_fast;
    int height_fast;
    int width_capture;
    int height_capture;
    int width_miniature;
    int height_miniature;
    int width_fullscreen;
    int height_fullscreen;
    int width_hd;
    int height_hd;
    float old_frame_scale;
    float noise_strength;
    int dyn_noise;
    float noise_speed;
    float preprocessing_bias_b;
    float preprocessing_bias_g;
    float preprocessing_bias_r;
    float preprocessing_scale;
    float preprocessing_old_frame_bias_scale;
    _Bool high_quality_scaling;
};

struct shared_ptr<Espresso::V9Engine::v9_noise_kernel> {
    struct v9_noise_kernel *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<Espresso::abstract_blob_container>;

struct shared_ptr<Espresso::abstract_context> {
    struct abstract_context *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<Espresso::base_kernel> {
    struct base_kernel *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<Espresso::blob<float, 1>> {
    struct blob<float, 1> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<Espresso::blob<float, 2>> {
    struct blob<float, 2> *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<Espresso::blob<float, 3>> {
    struct blob<float, 3> *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<Espresso::blob<float, 4>> {
    struct blob<float, 4> *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2>> {
    struct blob<unsigned char __attribute__((ext_vector_type(4))), 2> *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<Espresso::fast_pyramid_resizer> {
    struct fast_pyramid_resizer *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<Espresso::generic_load_constant_kernel> {
    struct generic_load_constant_kernel *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<Espresso::net> {
    struct net *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<float> {
    float *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<std::__1::basic_string<char>> {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    struct __shared_weak_count *_field2;
};

struct type {
    unsigned char _field1[32];
};

struct v9_noise_kernel;

struct vImage_Buffer {
    void *data;
    unsigned long long height;
    unsigned long long width;
    unsigned long long rowBytes;
};

struct vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint>> {
    struct FaceLandmarkDetectorPoint *_field1;
    struct FaceLandmarkDetectorPoint *_field2;
    struct __compressed_pair<FaceLandmarkDetectorPoint *, std::__1::allocator<FaceLandmarkDetectorPoint>> {
        struct FaceLandmarkDetectorPoint *_field1;
    } _field3;
};

struct vector<__CVBuffer *, std::__1::allocator<__CVBuffer *>> {
    struct __CVBuffer **__begin_;
    struct __CVBuffer **__end_;
    struct __compressed_pair<__CVBuffer **, std::__1::allocator<__CVBuffer *>> {
        struct __CVBuffer **__value_;
    } __end_cap_;
};

struct vector<double, std::__1::allocator<double>> {
    double *__begin_;
    double *__end_;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double *__value_;
    } __end_cap_;
};

struct vector<int, std::__1::allocator<int>> {
    int *__begin_;
    int *__end_;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *__value_;
    } __end_cap_;
};

struct vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long>>> {
    struct pair<unsigned long long, unsigned long long> *__begin_;
    struct pair<unsigned long long, unsigned long long> *__end_;
    struct __compressed_pair<std::__1::pair<unsigned long long, unsigned long long>*, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long>>> {
        struct pair<unsigned long long, unsigned long long> *__value_;
    } __end_cap_;
};

struct vector<std::__1::shared_ptr<Espresso::abstract_blob_container>, std::__1::allocator<std::__1::shared_ptr<Espresso::abstract_blob_container>>> {
    struct shared_ptr<Espresso::abstract_blob_container> *_field1;
    struct shared_ptr<Espresso::abstract_blob_container> *_field2;
    struct __compressed_pair<std::__1::shared_ptr<Espresso::abstract_blob_container>*, std::__1::allocator<std::__1::shared_ptr<Espresso::abstract_blob_container>>> {
        struct shared_ptr<Espresso::abstract_blob_container> *_field1;
    } _field3;
};

struct vector<std::__1::shared_ptr<Espresso::blob<float, 3>>, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3>>>> {
    shared_ptr_dc6ac1b7 *__begin_;
    shared_ptr_dc6ac1b7 *__end_;
    struct __compressed_pair<std::__1::shared_ptr<Espresso::blob<float, 3>>*, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3>>>> {
        shared_ptr_dc6ac1b7 *__value_;
    } __end_cap_;
};

struct vector<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>>> {
    shared_ptr_7fb9d9f9 *__begin_;
    shared_ptr_7fb9d9f9 *__end_;
    struct __compressed_pair<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>*, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>>> {
        shared_ptr_7fb9d9f9 *__value_;
    } __end_cap_;
};

struct vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net>>> {
    shared_ptr_d082c67d *__begin_;
    shared_ptr_d082c67d *__end_;
    struct __compressed_pair<std::__1::shared_ptr<Espresso::net>*, std::__1::allocator<std::__1::shared_ptr<Espresso::net>>> {
        shared_ptr_d082c67d *__value_;
    } __end_cap_;
};

struct vector<void *, std::__1::allocator<void *>> {
    void **__begin_;
    void **__end_;
    struct __compressed_pair<void **, std::__1::allocator<void *>> {
        void **__value_;
    } __end_cap_;
};

struct wisdom_trainer2 {
    int _field1;
    int _field2;
    int _field3;
    _Bool _field4;
    float _field5;
    float _field6;
    float _field7;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field8;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field9;
    _Bool _field10;
    struct map<std::__1::basic_string<char>, std::__1::vector<int, std::__1::allocator<int>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::vector<int, std::__1::allocator<int>>>>> _field11;
    struct vector<int, std::__1::allocator<int>> _field12;
    struct __sFILE *_field13;
    int _field14;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    void *data;
    void *reserved;
    unsigned long long dim[4];
    unsigned long long stride[4];
    unsigned long long width;
    unsigned long long height;
    unsigned long long channels;
    unsigned long long batch_number;
    unsigned long long sequence_length;
    unsigned long long stride_width;
    unsigned long long stride_height;
    unsigned long long stride_channels;
    unsigned long long stride_batch_number;
    unsigned long long stride_sequence_length;
    int storage_type;
} CDStruct_0a65202a;

typedef struct {
    void *plan;
    int network_index;
} CDStruct_2bc666a5;

typedef struct {
    CDStruct_14f26992 _field1;
    CDStruct_14f26992 _field2;
} CDStruct_4c83c94d;

// Template types
typedef struct map<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4>>>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4>>>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4>>>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4>>>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_8a5bf7af;

typedef struct pair<int, int> {
    int _field1;
    int _field2;
} pair_65f741c2;

typedef struct shared_ptr<Espresso::abstract_context> {
    struct abstract_context *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_ae8b808b;

typedef struct shared_ptr<Espresso::blob<float, 1>> {
    struct blob<float, 1> *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_0954c506;

typedef struct shared_ptr<Espresso::blob<float, 2>> {
    struct blob<float, 2> *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_e18d3254;

typedef struct shared_ptr<Espresso::blob<float, 3>> {
    struct blob<float, 3> *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_dc6ac1b7;

typedef struct shared_ptr<Espresso::blob<float, 4>> {
    struct blob<float, 4> *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_86ba3c2c;

typedef struct shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2>> {
    struct blob<unsigned char __attribute__((ext_vector_type(4))), 2> *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_5e9c0076;

typedef struct shared_ptr<Espresso::fast_pyramid_resizer> {
    struct fast_pyramid_resizer *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_7fb9d9f9;

typedef struct shared_ptr<Espresso::net> {
    struct net *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_d082c67d;

typedef struct shared_ptr<float> {
    float *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_6c49034a;

typedef struct shared_ptr<std::__1::basic_string<char>> {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_210dbb06;

typedef struct vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint>> {
    struct FaceLandmarkDetectorPoint *_field1;
    struct FaceLandmarkDetectorPoint *_field2;
    struct __compressed_pair<FaceLandmarkDetectorPoint *, std::__1::allocator<FaceLandmarkDetectorPoint>> {
        struct FaceLandmarkDetectorPoint *_field1;
    } _field3;
} vector_72a15614;

