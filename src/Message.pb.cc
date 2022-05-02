// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Message.proto

#include "Message.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR RequestMsg::RequestMsg(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.clientid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.serverid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.sign_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.data_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.cmdtype_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct RequestMsgDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RequestMsgDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~RequestMsgDefaultTypeInternal() {}
  union {
    RequestMsg _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RequestMsgDefaultTypeInternal _RequestMsg_default_instance_;
PROTOBUF_CONSTEXPR ResponseMsg::ResponseMsg(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.clientid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.serverid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.data_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.status_)*/false
  , /*decltype(_impl_.seckeyid_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ResponseMsgDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ResponseMsgDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ResponseMsgDefaultTypeInternal() {}
  union {
    ResponseMsg _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ResponseMsgDefaultTypeInternal _ResponseMsg_default_instance_;
static ::_pb::Metadata file_level_metadata_Message_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_Message_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Message_2eproto = nullptr;

const uint32_t TableStruct_Message_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::RequestMsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::RequestMsg, _impl_.cmdtype_),
  PROTOBUF_FIELD_OFFSET(::RequestMsg, _impl_.clientid_),
  PROTOBUF_FIELD_OFFSET(::RequestMsg, _impl_.serverid_),
  PROTOBUF_FIELD_OFFSET(::RequestMsg, _impl_.sign_),
  PROTOBUF_FIELD_OFFSET(::RequestMsg, _impl_.data_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ResponseMsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::ResponseMsg, _impl_.status_),
  PROTOBUF_FIELD_OFFSET(::ResponseMsg, _impl_.seckeyid_),
  PROTOBUF_FIELD_OFFSET(::ResponseMsg, _impl_.clientid_),
  PROTOBUF_FIELD_OFFSET(::ResponseMsg, _impl_.serverid_),
  PROTOBUF_FIELD_OFFSET(::ResponseMsg, _impl_.data_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::RequestMsg)},
  { 11, -1, -1, sizeof(::ResponseMsg)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_RequestMsg_default_instance_._instance,
  &::_ResponseMsg_default_instance_._instance,
};

const char descriptor_table_protodef_Message_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rMessage.proto\"]\n\nRequestMsg\022\017\n\007cmdType"
  "\030\001 \001(\005\022\020\n\010clientID\030\002 \001(\014\022\020\n\010serverID\030\003 \001"
  "(\014\022\014\n\004sign\030\004 \001(\014\022\014\n\004data\030\005 \001(\014\"a\n\013Respon"
  "seMsg\022\016\n\006status\030\001 \001(\010\022\020\n\010seckeyID\030\002 \001(\005\022"
  "\020\n\010clientID\030\003 \001(\014\022\020\n\010serverID\030\004 \001(\014\022\014\n\004d"
  "ata\030\005 \001(\014b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_Message_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Message_2eproto = {
    false, false, 217, descriptor_table_protodef_Message_2eproto,
    "Message.proto",
    &descriptor_table_Message_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_Message_2eproto::offsets,
    file_level_metadata_Message_2eproto, file_level_enum_descriptors_Message_2eproto,
    file_level_service_descriptors_Message_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Message_2eproto_getter() {
  return &descriptor_table_Message_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Message_2eproto(&descriptor_table_Message_2eproto);

// ===================================================================

class RequestMsg::_Internal {
 public:
};

RequestMsg::RequestMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:RequestMsg)
}
RequestMsg::RequestMsg(const RequestMsg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  new (&_impl_) Impl_{
      decltype(_impl_.clientid_){}
    , decltype(_impl_.serverid_){}
    , decltype(_impl_.sign_){}
    , decltype(_impl_.data_){}
    , decltype(_impl_.cmdtype_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.clientid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.clientid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_clientid().empty()) {
    _impl_.clientid_.Set(from._internal_clientid(), 
      GetArenaForAllocation());
  }
  _impl_.serverid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.serverid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_serverid().empty()) {
    _impl_.serverid_.Set(from._internal_serverid(), 
      GetArenaForAllocation());
  }
  _impl_.sign_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.sign_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_sign().empty()) {
    _impl_.sign_.Set(from._internal_sign(), 
      GetArenaForAllocation());
  }
  _impl_.data_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.data_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_data().empty()) {
    _impl_.data_.Set(from._internal_data(), 
      GetArenaForAllocation());
  }
  _impl_.cmdtype_ = from._impl_.cmdtype_;
  // @@protoc_insertion_point(copy_constructor:RequestMsg)
}

inline void RequestMsg::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.clientid_){}
    , decltype(_impl_.serverid_){}
    , decltype(_impl_.sign_){}
    , decltype(_impl_.data_){}
    , decltype(_impl_.cmdtype_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.clientid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.clientid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.serverid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.serverid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.sign_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.sign_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.data_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.data_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

RequestMsg::~RequestMsg() {
  // @@protoc_insertion_point(destructor:RequestMsg)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void RequestMsg::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.clientid_.Destroy();
  _impl_.serverid_.Destroy();
  _impl_.sign_.Destroy();
  _impl_.data_.Destroy();
}

void RequestMsg::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void RequestMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:RequestMsg)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.clientid_.ClearToEmpty();
  _impl_.serverid_.ClearToEmpty();
  _impl_.sign_.ClearToEmpty();
  _impl_.data_.ClearToEmpty();
  _impl_.cmdtype_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RequestMsg::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 cmdType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.cmdtype_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes clientID = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_clientid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes serverID = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_serverid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes sign = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_sign();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes data = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_data();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* RequestMsg::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:RequestMsg)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 cmdType = 1;
  if (this->_internal_cmdtype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_cmdtype(), target);
  }

  // bytes clientID = 2;
  if (!this->_internal_clientid().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_clientid(), target);
  }

  // bytes serverID = 3;
  if (!this->_internal_serverid().empty()) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_serverid(), target);
  }

  // bytes sign = 4;
  if (!this->_internal_sign().empty()) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_sign(), target);
  }

  // bytes data = 5;
  if (!this->_internal_data().empty()) {
    target = stream->WriteBytesMaybeAliased(
        5, this->_internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RequestMsg)
  return target;
}

size_t RequestMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RequestMsg)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes clientID = 2;
  if (!this->_internal_clientid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_clientid());
  }

  // bytes serverID = 3;
  if (!this->_internal_serverid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_serverid());
  }

  // bytes sign = 4;
  if (!this->_internal_sign().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_sign());
  }

  // bytes data = 5;
  if (!this->_internal_data().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_data());
  }

  // int32 cmdType = 1;
  if (this->_internal_cmdtype() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_cmdtype());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData RequestMsg::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    RequestMsg::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*RequestMsg::GetClassData() const { return &_class_data_; }

void RequestMsg::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<RequestMsg *>(to)->MergeFrom(
      static_cast<const RequestMsg &>(from));
}


void RequestMsg::MergeFrom(const RequestMsg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:RequestMsg)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_clientid().empty()) {
    _internal_set_clientid(from._internal_clientid());
  }
  if (!from._internal_serverid().empty()) {
    _internal_set_serverid(from._internal_serverid());
  }
  if (!from._internal_sign().empty()) {
    _internal_set_sign(from._internal_sign());
  }
  if (!from._internal_data().empty()) {
    _internal_set_data(from._internal_data());
  }
  if (from._internal_cmdtype() != 0) {
    _internal_set_cmdtype(from._internal_cmdtype());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void RequestMsg::CopyFrom(const RequestMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RequestMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RequestMsg::IsInitialized() const {
  return true;
}

void RequestMsg::InternalSwap(RequestMsg* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.clientid_, lhs_arena,
      &other->_impl_.clientid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.serverid_, lhs_arena,
      &other->_impl_.serverid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.sign_, lhs_arena,
      &other->_impl_.sign_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.data_, lhs_arena,
      &other->_impl_.data_, rhs_arena
  );
  swap(_impl_.cmdtype_, other->_impl_.cmdtype_);
}

::PROTOBUF_NAMESPACE_ID::Metadata RequestMsg::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Message_2eproto_getter, &descriptor_table_Message_2eproto_once,
      file_level_metadata_Message_2eproto[0]);
}

// ===================================================================

class ResponseMsg::_Internal {
 public:
};

ResponseMsg::ResponseMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:ResponseMsg)
}
ResponseMsg::ResponseMsg(const ResponseMsg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  new (&_impl_) Impl_{
      decltype(_impl_.clientid_){}
    , decltype(_impl_.serverid_){}
    , decltype(_impl_.data_){}
    , decltype(_impl_.status_){}
    , decltype(_impl_.seckeyid_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.clientid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.clientid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_clientid().empty()) {
    _impl_.clientid_.Set(from._internal_clientid(), 
      GetArenaForAllocation());
  }
  _impl_.serverid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.serverid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_serverid().empty()) {
    _impl_.serverid_.Set(from._internal_serverid(), 
      GetArenaForAllocation());
  }
  _impl_.data_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.data_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_data().empty()) {
    _impl_.data_.Set(from._internal_data(), 
      GetArenaForAllocation());
  }
  ::memcpy(&_impl_.status_, &from._impl_.status_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.seckeyid_) -
    reinterpret_cast<char*>(&_impl_.status_)) + sizeof(_impl_.seckeyid_));
  // @@protoc_insertion_point(copy_constructor:ResponseMsg)
}

inline void ResponseMsg::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.clientid_){}
    , decltype(_impl_.serverid_){}
    , decltype(_impl_.data_){}
    , decltype(_impl_.status_){false}
    , decltype(_impl_.seckeyid_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.clientid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.clientid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.serverid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.serverid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.data_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.data_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ResponseMsg::~ResponseMsg() {
  // @@protoc_insertion_point(destructor:ResponseMsg)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ResponseMsg::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.clientid_.Destroy();
  _impl_.serverid_.Destroy();
  _impl_.data_.Destroy();
}

void ResponseMsg::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ResponseMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:ResponseMsg)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.clientid_.ClearToEmpty();
  _impl_.serverid_.ClearToEmpty();
  _impl_.data_.ClearToEmpty();
  ::memset(&_impl_.status_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.seckeyid_) -
      reinterpret_cast<char*>(&_impl_.status_)) + sizeof(_impl_.seckeyid_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ResponseMsg::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool status = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.status_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 seckeyID = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.seckeyid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes clientID = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_clientid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes serverID = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_serverid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes data = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_data();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ResponseMsg::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ResponseMsg)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bool status = 1;
  if (this->_internal_status() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(1, this->_internal_status(), target);
  }

  // int32 seckeyID = 2;
  if (this->_internal_seckeyid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_seckeyid(), target);
  }

  // bytes clientID = 3;
  if (!this->_internal_clientid().empty()) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_clientid(), target);
  }

  // bytes serverID = 4;
  if (!this->_internal_serverid().empty()) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_serverid(), target);
  }

  // bytes data = 5;
  if (!this->_internal_data().empty()) {
    target = stream->WriteBytesMaybeAliased(
        5, this->_internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ResponseMsg)
  return target;
}

size_t ResponseMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ResponseMsg)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes clientID = 3;
  if (!this->_internal_clientid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_clientid());
  }

  // bytes serverID = 4;
  if (!this->_internal_serverid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_serverid());
  }

  // bytes data = 5;
  if (!this->_internal_data().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_data());
  }

  // bool status = 1;
  if (this->_internal_status() != 0) {
    total_size += 1 + 1;
  }

  // int32 seckeyID = 2;
  if (this->_internal_seckeyid() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_seckeyid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ResponseMsg::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ResponseMsg::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ResponseMsg::GetClassData() const { return &_class_data_; }

void ResponseMsg::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ResponseMsg *>(to)->MergeFrom(
      static_cast<const ResponseMsg &>(from));
}


void ResponseMsg::MergeFrom(const ResponseMsg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ResponseMsg)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_clientid().empty()) {
    _internal_set_clientid(from._internal_clientid());
  }
  if (!from._internal_serverid().empty()) {
    _internal_set_serverid(from._internal_serverid());
  }
  if (!from._internal_data().empty()) {
    _internal_set_data(from._internal_data());
  }
  if (from._internal_status() != 0) {
    _internal_set_status(from._internal_status());
  }
  if (from._internal_seckeyid() != 0) {
    _internal_set_seckeyid(from._internal_seckeyid());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ResponseMsg::CopyFrom(const ResponseMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ResponseMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResponseMsg::IsInitialized() const {
  return true;
}

void ResponseMsg::InternalSwap(ResponseMsg* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.clientid_, lhs_arena,
      &other->_impl_.clientid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.serverid_, lhs_arena,
      &other->_impl_.serverid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.data_, lhs_arena,
      &other->_impl_.data_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ResponseMsg, _impl_.seckeyid_)
      + sizeof(ResponseMsg::_impl_.seckeyid_)
      - PROTOBUF_FIELD_OFFSET(ResponseMsg, _impl_.status_)>(
          reinterpret_cast<char*>(&_impl_.status_),
          reinterpret_cast<char*>(&other->_impl_.status_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ResponseMsg::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Message_2eproto_getter, &descriptor_table_Message_2eproto_once,
      file_level_metadata_Message_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::RequestMsg*
Arena::CreateMaybeMessage< ::RequestMsg >(Arena* arena) {
  return Arena::CreateMessageInternal< ::RequestMsg >(arena);
}
template<> PROTOBUF_NOINLINE ::ResponseMsg*
Arena::CreateMaybeMessage< ::ResponseMsg >(Arena* arena) {
  return Arena::CreateMessageInternal< ::ResponseMsg >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>