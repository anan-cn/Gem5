// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: packet.proto

#ifndef PROTOBUF_packet_2eproto__INCLUDED
#define PROTOBUF_packet_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace Message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_packet_2eproto();
void protobuf_AssignDesc_packet_2eproto();
void protobuf_ShutdownFile_packet_2eproto();

class PacketHeader;
class Packet;

// ===================================================================

class PacketHeader : public ::google::protobuf::Message {
 public:
  PacketHeader();
  virtual ~PacketHeader();
  
  PacketHeader(const PacketHeader& from);
  
  inline PacketHeader& operator=(const PacketHeader& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const PacketHeader& default_instance();
  
  void Swap(PacketHeader* other);
  
  // implements Message ----------------------------------------------
  
  PacketHeader* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PacketHeader& from);
  void MergeFrom(const PacketHeader& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string obj_id = 1;
  inline bool has_obj_id() const;
  inline void clear_obj_id();
  static const int kObjIdFieldNumber = 1;
  inline const ::std::string& obj_id() const;
  inline void set_obj_id(const ::std::string& value);
  inline void set_obj_id(const char* value);
  inline void set_obj_id(const char* value, size_t size);
  inline ::std::string* mutable_obj_id();
  inline ::std::string* release_obj_id();
  
  // optional uint32 ver = 2 [default = 0];
  inline bool has_ver() const;
  inline void clear_ver();
  static const int kVerFieldNumber = 2;
  inline ::google::protobuf::uint32 ver() const;
  inline void set_ver(::google::protobuf::uint32 value);
  
  // required uint64 tick_freq = 3;
  inline bool has_tick_freq() const;
  inline void clear_tick_freq();
  static const int kTickFreqFieldNumber = 3;
  inline ::google::protobuf::uint64 tick_freq() const;
  inline void set_tick_freq(::google::protobuf::uint64 value);
  
  // @@protoc_insertion_point(class_scope:Message.PacketHeader)
 private:
  inline void set_has_obj_id();
  inline void clear_has_obj_id();
  inline void set_has_ver();
  inline void clear_has_ver();
  inline void set_has_tick_freq();
  inline void clear_has_tick_freq();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* obj_id_;
  ::google::protobuf::uint64 tick_freq_;
  ::google::protobuf::uint32 ver_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_packet_2eproto();
  friend void protobuf_AssignDesc_packet_2eproto();
  friend void protobuf_ShutdownFile_packet_2eproto();
  
  void InitAsDefaultInstance();
  static PacketHeader* default_instance_;
};
// -------------------------------------------------------------------

class Packet : public ::google::protobuf::Message {
 public:
  Packet();
  virtual ~Packet();
  
  Packet(const Packet& from);
  
  inline Packet& operator=(const Packet& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Packet& default_instance();
  
  void Swap(Packet* other);
  
  // implements Message ----------------------------------------------
  
  Packet* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Packet& from);
  void MergeFrom(const Packet& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required uint64 tick = 1;
  inline bool has_tick() const;
  inline void clear_tick();
  static const int kTickFieldNumber = 1;
  inline ::google::protobuf::uint64 tick() const;
  inline void set_tick(::google::protobuf::uint64 value);
  
  // required uint32 cmd = 2;
  inline bool has_cmd() const;
  inline void clear_cmd();
  static const int kCmdFieldNumber = 2;
  inline ::google::protobuf::uint32 cmd() const;
  inline void set_cmd(::google::protobuf::uint32 value);
  
  // required uint64 addr = 3;
  inline bool has_addr() const;
  inline void clear_addr();
  static const int kAddrFieldNumber = 3;
  inline ::google::protobuf::uint64 addr() const;
  inline void set_addr(::google::protobuf::uint64 value);
  
  // required uint32 size = 4;
  inline bool has_size() const;
  inline void clear_size();
  static const int kSizeFieldNumber = 4;
  inline ::google::protobuf::uint32 size() const;
  inline void set_size(::google::protobuf::uint32 value);
  
  // optional uint32 flags = 5;
  inline bool has_flags() const;
  inline void clear_flags();
  static const int kFlagsFieldNumber = 5;
  inline ::google::protobuf::uint32 flags() const;
  inline void set_flags(::google::protobuf::uint32 value);
  
  // optional uint64 pkt_id = 6;
  inline bool has_pkt_id() const;
  inline void clear_pkt_id();
  static const int kPktIdFieldNumber = 6;
  inline ::google::protobuf::uint64 pkt_id() const;
  inline void set_pkt_id(::google::protobuf::uint64 value);
  
  // @@protoc_insertion_point(class_scope:Message.Packet)
 private:
  inline void set_has_tick();
  inline void clear_has_tick();
  inline void set_has_cmd();
  inline void clear_has_cmd();
  inline void set_has_addr();
  inline void clear_has_addr();
  inline void set_has_size();
  inline void clear_has_size();
  inline void set_has_flags();
  inline void clear_has_flags();
  inline void set_has_pkt_id();
  inline void clear_has_pkt_id();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::uint64 tick_;
  ::google::protobuf::uint64 addr_;
  ::google::protobuf::uint32 cmd_;
  ::google::protobuf::uint32 size_;
  ::google::protobuf::uint64 pkt_id_;
  ::google::protobuf::uint32 flags_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];
  
  friend void  protobuf_AddDesc_packet_2eproto();
  friend void protobuf_AssignDesc_packet_2eproto();
  friend void protobuf_ShutdownFile_packet_2eproto();
  
  void InitAsDefaultInstance();
  static Packet* default_instance_;
};
// ===================================================================


// ===================================================================

// PacketHeader

// required string obj_id = 1;
inline bool PacketHeader::has_obj_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PacketHeader::set_has_obj_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PacketHeader::clear_has_obj_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PacketHeader::clear_obj_id() {
  if (obj_id_ != &::google::protobuf::internal::kEmptyString) {
    obj_id_->clear();
  }
  clear_has_obj_id();
}
inline const ::std::string& PacketHeader::obj_id() const {
  return *obj_id_;
}
inline void PacketHeader::set_obj_id(const ::std::string& value) {
  set_has_obj_id();
  if (obj_id_ == &::google::protobuf::internal::kEmptyString) {
    obj_id_ = new ::std::string;
  }
  obj_id_->assign(value);
}
inline void PacketHeader::set_obj_id(const char* value) {
  set_has_obj_id();
  if (obj_id_ == &::google::protobuf::internal::kEmptyString) {
    obj_id_ = new ::std::string;
  }
  obj_id_->assign(value);
}
inline void PacketHeader::set_obj_id(const char* value, size_t size) {
  set_has_obj_id();
  if (obj_id_ == &::google::protobuf::internal::kEmptyString) {
    obj_id_ = new ::std::string;
  }
  obj_id_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PacketHeader::mutable_obj_id() {
  set_has_obj_id();
  if (obj_id_ == &::google::protobuf::internal::kEmptyString) {
    obj_id_ = new ::std::string;
  }
  return obj_id_;
}
inline ::std::string* PacketHeader::release_obj_id() {
  clear_has_obj_id();
  if (obj_id_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = obj_id_;
    obj_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional uint32 ver = 2 [default = 0];
inline bool PacketHeader::has_ver() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PacketHeader::set_has_ver() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PacketHeader::clear_has_ver() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PacketHeader::clear_ver() {
  ver_ = 0u;
  clear_has_ver();
}
inline ::google::protobuf::uint32 PacketHeader::ver() const {
  return ver_;
}
inline void PacketHeader::set_ver(::google::protobuf::uint32 value) {
  set_has_ver();
  ver_ = value;
}

// required uint64 tick_freq = 3;
inline bool PacketHeader::has_tick_freq() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PacketHeader::set_has_tick_freq() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PacketHeader::clear_has_tick_freq() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PacketHeader::clear_tick_freq() {
  tick_freq_ = GOOGLE_ULONGLONG(0);
  clear_has_tick_freq();
}
inline ::google::protobuf::uint64 PacketHeader::tick_freq() const {
  return tick_freq_;
}
inline void PacketHeader::set_tick_freq(::google::protobuf::uint64 value) {
  set_has_tick_freq();
  tick_freq_ = value;
}

// -------------------------------------------------------------------

// Packet

// required uint64 tick = 1;
inline bool Packet::has_tick() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Packet::set_has_tick() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Packet::clear_has_tick() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Packet::clear_tick() {
  tick_ = GOOGLE_ULONGLONG(0);
  clear_has_tick();
}
inline ::google::protobuf::uint64 Packet::tick() const {
  return tick_;
}
inline void Packet::set_tick(::google::protobuf::uint64 value) {
  set_has_tick();
  tick_ = value;
}

// required uint32 cmd = 2;
inline bool Packet::has_cmd() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Packet::set_has_cmd() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Packet::clear_has_cmd() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Packet::clear_cmd() {
  cmd_ = 0u;
  clear_has_cmd();
}
inline ::google::protobuf::uint32 Packet::cmd() const {
  return cmd_;
}
inline void Packet::set_cmd(::google::protobuf::uint32 value) {
  set_has_cmd();
  cmd_ = value;
}

// required uint64 addr = 3;
inline bool Packet::has_addr() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Packet::set_has_addr() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Packet::clear_has_addr() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Packet::clear_addr() {
  addr_ = GOOGLE_ULONGLONG(0);
  clear_has_addr();
}
inline ::google::protobuf::uint64 Packet::addr() const {
  return addr_;
}
inline void Packet::set_addr(::google::protobuf::uint64 value) {
  set_has_addr();
  addr_ = value;
}

// required uint32 size = 4;
inline bool Packet::has_size() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Packet::set_has_size() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Packet::clear_has_size() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Packet::clear_size() {
  size_ = 0u;
  clear_has_size();
}
inline ::google::protobuf::uint32 Packet::size() const {
  return size_;
}
inline void Packet::set_size(::google::protobuf::uint32 value) {
  set_has_size();
  size_ = value;
}

// optional uint32 flags = 5;
inline bool Packet::has_flags() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Packet::set_has_flags() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Packet::clear_has_flags() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Packet::clear_flags() {
  flags_ = 0u;
  clear_has_flags();
}
inline ::google::protobuf::uint32 Packet::flags() const {
  return flags_;
}
inline void Packet::set_flags(::google::protobuf::uint32 value) {
  set_has_flags();
  flags_ = value;
}

// optional uint64 pkt_id = 6;
inline bool Packet::has_pkt_id() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Packet::set_has_pkt_id() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Packet::clear_has_pkt_id() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Packet::clear_pkt_id() {
  pkt_id_ = GOOGLE_ULONGLONG(0);
  clear_has_pkt_id();
}
inline ::google::protobuf::uint64 Packet::pkt_id() const {
  return pkt_id_;
}
inline void Packet::set_pkt_id(::google::protobuf::uint64 value) {
  set_has_pkt_id();
  pkt_id_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_packet_2eproto__INCLUDED
